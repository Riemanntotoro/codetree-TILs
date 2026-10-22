fun main() {
    val reader = System.`in`.bufferedReader()
    val writer = System.out.bufferedWriter()
    val N = reader.readLine().trim().toInt()

    for (i in 0 until N) {
        for (j in 0 until N) {
            val value = if ((i*N+j+1)%9 != 0) (i*N+j+1)%9 else 9 
            writer.write("${value}")
        }
        writer.write("\n")
    }
    writer.flush()
}