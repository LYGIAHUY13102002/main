1. Tìm hiểu về cấu trúc dữ liệu và giải thuật ?
	- Cấu trúc dữ liệu là gì ? - Ví dụ ? 			- x
	- Giải thuật là gì ? - Ví dụ ?				- x
	- Định nghĩa Lớp, đối tượng, thuộc tính, phương thức?	- x
	- các mức độ truy cập (private, protected, public)?	- x
	- pure virtual method là gì ? 				- x
	- Destructor ảo có ý nghĩa gì ? 
	- khác biệt giữ phương thức có const và không có const?	- x
2. Lập trình hướng đối tượng ?					- xxx
	- lập trình hướng đối tượng là gì ? 			- x
	- có bao nhiêu đặc tính chính ? 			- xx
	  -> đóng gói, vd? 					- x
	  -> kế thừa, vd ? 					- x
	  -> đa hình, vd ? 					- x
	  -> trừu tượng, vd ? 					- x
3. Giải thuật tìm kiếm (Searching Algorithms)
4. Giải thuật sắp xếp (Sorting Algorithms)
5. Giải thuật đồ thị (Graph Algorithms)
6. Giải thuật quy hoạch động (Dynamic Programming)
7. Giải thuật tham lam (Greedy Algorithms)
8. Cách tiếp cận để xử lý bài toán một cách hiệu quả ?
9. Bài toán về Searching Algorithms
	Hệ thống quản lý thư viện
	- yêu cầu bài toán là gì ?
	- kiểu dữ liệu đầu vào và đầu ra ?
	- ràng buộc là gì ?
	- cấu trúc dữ liệu áp dụng là gì ? Dựa vào đâu ?
	- có các giải thuật nào ?


10. Cmake

==================================================================================================================================
1. Tìm hiểu về cấu trúc dữ liệu và giải thuật ? - xx
	- Cấu trúc dữ liệu là gì ? - Ví dụ ? - x
	- Giải thuật là gì ? - Ví dụ ?	- x
    Cấu trúc dữ liệu và giải thuật là hai khái niệm cơ bản trong khoa học máy tính và lập trình. Chúng là nền tảng để giải quyết các vấn đề phức tạp và tối ưu hóa hiệu suất của chương trình. Dưới đây là giải thích chi tiết về từng khái niệm:

    Cấu trúc dữ liệu (Data Structure):

    Định nghĩa: Cấu trúc dữ liệu là cách tổ chức, quản lý và lưu trữ dữ liệu để có thể truy cập và sửa đổi một cách hiệu quả.
    Các loại cấu trúc dữ liệu phổ biến:
    Mảng (Array): Một tập hợp các phần tử có cùng kiểu dữ liệu, được lưu trữ liền kề trong bộ nhớ.
    Danh sách liên kết (Linked List): Một tập hợp các phần tử, mỗi phần tử chứa dữ liệu và một con trỏ đến phần tử tiếp theo.
    Ngăn xếp (Stack): Cấu trúc dữ liệu hoạt động theo nguyên tắc LIFO (Last In, First Out).
    Hàng đợi (Queue): Cấu trúc dữ liệu hoạt động theo nguyên tắc FIFO (First In, First Out).
    Cây (Tree): Cấu trúc dữ liệu phân cấp, với một nút gốc và các nút con.
    Đồ thị (Graph): Một tập hợp các nút và các cạnh nối các nút lại với nhau.
    Bảng băm (Hash Table): Một cấu trúc dữ liệu sử dụng hàm băm để ánh xạ khóa với giá trị.
    Giải thuật (Algorithm):

    Định nghĩa: Giải thuật là một dãy các bước cụ thể để giải quyết một bài toán hoặc thực hiện một nhiệm vụ.
    Các loại giải thuật phổ biến:
    Giải thuật tìm kiếm (Searching Algorithms): Tìm kiếm một phần tử trong cấu trúc dữ liệu (ví dụ: tìm kiếm nhị phân).
    Giải thuật sắp xếp (Sorting Algorithms): Sắp xếp các phần tử trong cấu trúc dữ liệu theo một thứ tự nhất định (ví dụ: sắp xếp nhanh, sắp xếp nổi bọt).
    Giải thuật đồ thị (Graph Algorithms): Giải quyết các bài toán liên quan đến đồ thị (ví dụ: Dijkstra, BFS, DFS).
    Giải thuật quy hoạch động (Dynamic Programming): Giải quyết các bài toán phức tạp bằng cách chia nhỏ thành các bài toán con (ví dụ: bài toán con ếch, bài toán người bán hàng).
    Giải thuật tham lam (Greedy Algorithms): Giải quyết bài toán bằng cách chọn lựa tối ưu tại mỗi bước đi.
    Cấu trúc dữ liệu và giải thuật thường được sử dụng cùng nhau để tối ưu hóa hiệu suất và khả năng mở rộng của các chương trình. Việc lựa chọn cấu trúc dữ liệu và giải thuật phù hợp cho một bài toán cụ thể là một kỹ năng quan trọng trong lập trình.


==================================================================================================================================
2. Cách tiếp cận để xử lý bài toán một cách hiệu quả ?
    1. Hiểu rõ về bài toán
    Đề bài yêu cầu gì?
    Đề bài có yêu cầu cụ thể nào cần đáp ứng không? Ví dụ: tìm kiếm, sắp xếp, tối ưu hóa?
    Đầu vào và đầu ra của bài toán là gì?
    Dữ liệu đầu vào có định dạng như thế nào? (Ví dụ: mảng, danh sách, chuỗi, đồ thị)
    Đầu ra mong muốn là gì? (Ví dụ: chỉ số, giá trị, cấu trúc dữ liệu)
    2. Ràng buộc và điều kiện
    Có những ràng buộc nào về thời gian và không gian?
    Bài toán có giới hạn về thời gian thực hiện (thời gian chạy) hoặc không gian bộ nhớ không?
    Kích thước dữ liệu như thế nào?
    Dữ liệu đầu vào có thể rất lớn không? Số lượng phần tử tối đa là bao nhiêu?
    Có những điều kiện đặc biệt nào khác?
    Dữ liệu đầu vào có được sắp xếp trước không? Có các giá trị trùng lặp không?
    3. Tính chất của bài toán
    Bài toán có tính chất gì đặc biệt?
    Bài toán có thuộc loại bài toán quen thuộc không? (Ví dụ: bài toán cổ điển như tìm đường đi ngắn nhất, bài toán quy hoạch động)
    Có các bài toán con nào có thể giải quyết độc lập không?
    Bài toán có thể được chia nhỏ thành các bài toán con để dễ giải quyết hơn không?
    4. Lựa chọn giải thuật và cấu trúc dữ liệu
    Cấu trúc dữ liệu nào phù hợp?
    Cấu trúc dữ liệu nào có thể giúp giải quyết bài toán một cách hiệu quả nhất?
    Giải thuật nào có thể áp dụng?
    Có giải thuật nào quen thuộc và phù hợp với bài toán không? (Ví dụ: tìm kiếm tuần tự, tìm kiếm nhị phân, quy hoạch động)
    Có thể tối ưu hóa giải thuật không?
    Có các cải tiến nào có thể áp dụng để tối ưu hóa giải thuật về mặt thời gian hoặc không gian không?
    5. Kiểm thử và đánh giá
    Làm thế nào để kiểm thử giải thuật?
    Có các bộ dữ liệu kiểm thử nào cần thiết để đảm bảo giải thuật hoạt động đúng?
    Giải thuật hoạt động hiệu quả như thế nào?
    Giải thuật có đáp ứng các yêu cầu về hiệu suất không? Kết quả có chính xác không?
    6. Cân nhắc và điều chỉnh
    Có các phương án thay thế nào?
    Nếu giải thuật hiện tại không hiệu quả, có thể cân nhắc phương án nào khác?
    Có các yếu tố ngoại cảnh nào ảnh hưởng?
    Các yếu tố như phần cứng, phần mềm, môi trường thực thi có ảnh hưởng đến giải thuật không?

==================================================================================================================================
3. Bài toán về Searching Algorithms
	Hệ thống quản lý thư viện
	- yêu cầu bài toán là gì ?
	- kiểu dữ liệu đầu vào và đầu ra ?
	- ràng buộc là gì ?
	- cấu trúc dữ liệu áp dụng là gì ? Dựa vào đâu ?
	- có các giải thuật nào ?
    Phân tích bài toán
    1. Yêu cầu: Quản lý thông tin sách và cung cấp các chức năng tìm kiếm theo mã sách (ISBN), tên sách, tác giả, năm xuất bản, thể loại.
    2. Dữ liệu: Thông tin sách bao gồm: Mã sách (ISBN), tên sách, tác giả, năm xuất bản, thể loại, vị trí trên kệ.
    3. Ràng buộc: Hệ thống phải xử lý được hàng triệu cuốn sách và trả về kết quả tìm kiếm nhanh chóng.
    4. Cấu trúc dữ liệu
    Sử dụng unordered_map (bảng băm) để tìm kiếm theo mã sách (ISBN): Đây là cách tối ưu nhất để tìm kiếm theo mã sách vì tra cứu trong bảng băm có thời gian trung bình là O(1).
    Sử dụng multimap để tìm kiếm theo tên sách, tác giả, năm xuất bản và thể loại: multimap cho phép lưu trữ nhiều giá trị có cùng một khóa, giúp dễ dàng tìm kiếm theo các thuộc tính có thể trùng lặp.
    5. Giải thuật
    Thêm sách: Thêm sách vào bảng băm (theo mã sách) và các multimap (theo tên sách, tác giả, năm xuất bản, thể loại).
    Tìm kiếm: Sử dụng hàm tìm kiếm của unordered_map và multimap để truy vấn dữ liệu.

==================================================================================================================================
4. Lập trình hướng đối tượng là gì ?
Lập trình hướng đối tượng (Object-Oriented Programming, OOP) là một phương pháp lập trình dựa trên việc tổ chức dữ liệu và chức năng thành các đối tượng, thay vì chỉ dựa vào các hàm và dữ liệu đơn giản. 
    1. Đối Tượng (Object): Các thực thể của lớp, bao gồm dữ liệu (thuộc tính) và chức năng (phương thức).
    2. Lớp (Class): Một khuôn mẫu (template) để tạo các đối tượng. Lớp định nghĩa các thuộc tính và phương thức mà đối tượng của lớp đó sẽ có.
    3. Đóng Gói (Encapsulation): Quyền truy cập vào dữ liệu của đối tượng được kiểm soát thông qua các phương thức công cộng và riêng tư.
    4. Kế Thừa (Inheritance): Cung cấp khả năng tạo lớp mới dựa trên lớp đã tồn tại, giúp tái sử dụng mã và mở rộng chức năng.
    5. Đa Hình (Polymorphism): Cho phép các đối tượng của các lớp khác nhau sử dụng chung các phương thức với cùng tên nhưng thực hiện khác nhau.   
Destructor ảo trong C++ được sử dụng để đảm bảo rằng khi một đối tượng của lớp dẫn xuất (derived class) bị hủy thông qua con trỏ của lớp cơ sở (base class), destructor của lớp dẫn xuất sẽ được gọi chính xác. Điều này rất quan trọng khi làm việc với các lớp có tính đa hình (polymorphism), vì nếu không có destructor ảo, có thể xảy ra rò rỉ bộ nhớ hoặc các vấn đề khác liên quan đến quản lý tài nguyên.
==================================================================================================================================
5. Ý Nghĩa của Destructor Ảo
    1. Đảm Bảo Hủy Đối Tượng Đúng Cách: Nếu lớp cơ sở có một destructor không phải là ảo và bạn hủy một đối tượng của lớp dẫn xuất thông qua con trỏ của lớp cơ sở, chỉ có destructor của lớp cơ sở được gọi. Điều này có thể dẫn đến việc các tài nguyên mà lớp dẫn xuất quản lý không được giải phóng đúng cách.
    2. Quản Lý Tài Nguyên Đúng Cách: Nếu lớp dẫn xuất có tài nguyên cần được giải phóng (như bộ nhớ động, tệp, kết nối mạng, v.v.), thì destructor của lớp dẫn xuất phải được gọi để đảm bảo tài nguyên này được giải phóng chính xác.
virtual ~BankAccount() = default;
    1. virtual: Khi khai báo destructor là virtual, nó đảm bảo rằng khi một đối tượng của lớp dẫn xuất bị hủy thông qua con trỏ của lớp cơ sở, destructor của lớp dẫn xuất cũng sẽ được gọi sau destructor của lớp cơ sở.
    2. = default;: Đây là một cú pháp của C++11 trở về sau, cho phép bạn yêu cầu trình biên dịch tạo ra một destructor mặc định cho lớp này. Trong trường hợp này, mặc dù destructor là ảo, bạn không cần viết bất kỳ mã đặc biệt nào để hủy bỏ đối tượng, trình biên dịch sẽ tự động tạo ra một destructor mặc định.