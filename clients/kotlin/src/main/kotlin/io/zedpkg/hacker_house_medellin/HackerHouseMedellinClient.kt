package io.zedpkg.hacker_house_medellin
import java.net.URI
data class HackerHouseMedellinClient(val baseUrl: URI, val bearerToken: String? = null) {
  suspend fun health(): Boolean = baseUrl.toString().isNotEmpty()
}
