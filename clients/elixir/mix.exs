defmodule HackerHouseMedellinClient.MixProject do
  use Mix.Project
  def project, do: [app: :hacker_house_medellin_client, version: "0.1.0", elixir: "~> 1.15"]
  def application, do: [extra_applications: [:logger]]
end
