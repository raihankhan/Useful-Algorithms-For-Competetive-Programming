# Standard template Library (STL)

## map and unordered_map
map is a very important STL used in competitive programming. Map is implemented using Red-Black Tree. Maps store values in the form of a combination of a key value and a mapped value.
Declaration:
map<int,int>mm ;
unordered_map<int,int>mm ;

### mm.find(k)
Returns an iterator of the specified key value if it's been found in the map or returns an iterator to mm.end() if element not found.

map<int,int>mm;
mm[4]=9;
mm[3]=2;

auto it=mm.find(4);

if(it==mm.end())
cout << "element not found" << endl;
else cout << it->first << " " << it->second << endl;  // prints- 4 9

complexity:
for map complexity is logarithmic.
for unordered_map complexity is constant(average), linear(worst).
