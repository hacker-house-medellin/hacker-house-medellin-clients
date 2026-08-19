package io.zedpkg.hacker_house_medellin;
import java.net.URI;
public record HackerHouseMedellinClient(URI baseUrl, String bearerToken) {
  public boolean health() { return baseUrl != null; }
}
