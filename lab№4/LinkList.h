struct element
{
    int      data;
    element* next;
};
 
struct linklist
{
 private:
    element* head; // начало списка
    element* tail; // конец списка
 
 public:
    linklist();
    ~linklist();
    void additem(int d);
    void PrintList();
};