class Point:
    
    def __init__(self, x, y):
        self.x = x;
        self.y = y;
        
    def __add(self, other):
        x = self.x + other.x;
        y = self.y + other.y;
        return Point(x, y)
    
    def __str__(self):
        return ["{0}, {1}".format(self.x, self.y)]
        
Point1 = Point(1, 4)
Point2 = Point(2, 8)
print(Point1 + Point2)