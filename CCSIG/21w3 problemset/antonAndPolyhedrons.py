polyhedron: dict[str, int] = {"Tetrahedron" : 4, "Cube": 6, "Octahedron": 8, "Dodecahedron": 12, "Icosahedron": 20}

n: int = int(input())
sum: int = 0

for _ in range(n):
    shape: str = str(input())
    sum += polyhedron[shape]

print(sum)