struct element
{
    int      data;
    element* next;
};
 
struct linklist
{
 private:
    element* head; // ������ ������
    element* tail; // ����� ������
 
 public:
    linklist();
    ~linklist();
    void additem(int d);
    void PrintList();
};