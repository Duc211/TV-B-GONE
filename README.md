# 📺️ TV-B-GONE WebUI 🌐
Tv-b-gone có webui (tổng hợp các mã từ tv-b-gone esp8266 và Flipper-IRDB)

# 🔌 Nối dây 🔌
<img width="882" height="426" alt="646883191-e9ae0c24-5ff1-4e29-b4d9-9e08d57462c1" src="https://github.com/user-attachments/assets/49106477-5d47-4f05-91d8-0c66dbe2639a" />
Đây là sơ đồ nối dây mặc định, có thể thay đổi trong cài đặt (có thể bỏ trở 100ohm từ gpio đến transistor (không bắt buộc phải bỏ 😀))

# ✨️ Tính năng ✨️
Code TV-B-GONE này có các tính năng:
-  Thay đổi ngôn ngữ WebUI (Tiếng Anh/Việt/Trung/Hàn/Nga/Nhật)
-  Thay đổi tên wifi (mặc định là TV-B-GONE)
-  Thay đổi mật khẩu wifi (mặc định là không khóa)
-  Thay đổi chủ đề sáng/tối và chủ đề màu
-  Thay đổi chân GPIO cho led hồng ngoại,nút bấm,led nháy trạng thái (mặc định là 21  -  9   -   8)
-  Sao lưu / khôi phục file cài đặt
-  Cập nhật OTA để không phải nạp lại qua cổng usb

# ⏬️ Cài đặt ⏬️
- Nếu flash 1 file thì nạp file 'firmware.factory.bin' vào 0x0
- Nếu flash 3 file thì nạp 'bootloader.bin' vào 0x0
- .........................'partitions.bin' vào 0x8000
- .........................'firmware.bin' vào 0x10000
- Cập nhật OTA thì dùng file 'firmware.bin' (file chỉ chứa app),không phải 'firmware.factory.bin' (file có cả BL và partitions)
