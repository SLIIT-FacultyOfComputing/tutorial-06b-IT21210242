class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setLength(int l); 
       int getLength();
       void setWidth(int w); 
       int getWidth();
       void setHeight(int h); 
       int getHeight();
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height
 
       int calcVolume();
};
