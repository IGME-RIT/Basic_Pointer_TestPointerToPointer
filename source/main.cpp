/*
TestPointerToPointer
(c) 2016
original authors: David I. Schwartz
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*	This tutorial illustrates the way to initialize integer, pointer 
*	pointer to integer and pointer to pointer.
*/

#include <iostream>
using namespace std;

int main() {

    int i = 10;
    int* q = &i;
    int** p = &q;

    /*
    *     ┌───┐         ┌───┐     ┌───┐ 
    *     │ p │────────>│ q │────>│ i │
    *     └─┬─┘         └─┬─┘     └─┬─┘
    *       │             │         │
    * ┌─────┴─────┐  ┌────┴────┐  ┌─┴──┐ 
    * │  address  │  │ address │  │ 10 │
    * │   of p    │  │  of q   │  │    │
    * └───────────┘  └─────────┘  └────┘
    */

    printf("%s%i\n","&i:  ",&i);
    printf("%s%i\n","q:   ",q);
    printf("%s%i\n","*p:  ",*p);

    cout << endl;

    printf("%s%i\n","i:   ",i);
    printf("%s%i\n","*q:  ",*q);
    printf("%s%i\n","**p: ",**p);



}
