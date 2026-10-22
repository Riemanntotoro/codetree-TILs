fun main() {
    val reader = System.`in`.bufferedReader()
    val writer = System.out.bufferedWriter()

    val N = reader.readLine().trim().toInt()
    for (i in 0 until N) {
        for (j in 0 until N) {
            writer.write("${N*i + j + 1} ")
        }
        writer.write("\n")
    }
    writer.flush()
}