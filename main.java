public class Main {

    static {
        // بارگذاری کتابخانه C
        System.loadLibrary("process");
    }

    public static void main(String[] args) {
        System.out.println("Starting CJDK processing...");

        // انجام پردازش با C
        processWithC();

        // نمایش نتیجه
        System.out.println("CJDK processing complete.");
    }

    // تابع native که پردازش C را فراخوانی می‌کند
    public static native void processWithC();
}
