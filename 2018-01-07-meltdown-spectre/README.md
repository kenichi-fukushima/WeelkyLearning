# References
- [:white_check_mark: Meltdown and Spectre](https://meltdownattack.com/)
- [Meltdown](https://meltdownattack.com/meltdown.pdf)
- [Spectre Attacks: Exploiting Speculative Execution](https://spectreattack.com/spectre.pdf)
- [Reading privileged memory with a side-channel - Project Zero](https://googleprojectzero.blogspot.jp/2018/01/reading-privileged-memory-with-side.html)
- [:bulb: What Google Cloud, G Suite and Chrome customers need to know about the industry-wide CPU vulnerability - Google Cloud Blog](https://blog.google/topics/google-cloud/what-google-cloud-g-suite-and-chrome-customers-need-know-about-industry-wide-cpu-vulnerability/)
- [:white_check_mark: :bulb: Answering your questions about "Meltdown" and "Spectre" - Google Cloud Blog](https://blog.google/topics/google-cloud/answering-your-questions-about-meltdown-and-spectre/)
- [:white_check_mark: :bulb: Today's CPU vulnerability: what you need to know - Google Security Blog](https://security.googleblog.com/2018/01/todays-cpu-vulnerability-what-you-need.html)
- [:white_check_mark: :bulb: More details about mitigations for the CPU Speculative Execution issue - Google Security Blog](https://security.googleblog.com/2018/01/more-details-about-mitigations-for-cpu_4.html)
- [Meltdown - Cyberus Tech-Blog](http://blog.cyberus-technology.de/posts/2018-01-03-meltdown.html)
- [Intel Analysis of Speculative Execution Side Channels](https://newsroom.intel.com/wp-content/uploads/sites/11/2018/01/Intel-Analysis-of-Speculative-Execution-Side-Channels.pdf)
- [Meltdown, Spectre で学ぶ高性能コンピュータアーキテクチャ - FPGA開発日記](http://msyksphinz.hatenablog.com/entry/2018/01/06/020000)
- [:white_check_mark: :bulb: CPUの脆弱性 MeltdownとSpectreについてまとめてみた - piyolog](http://d.hatena.ne.jp/Kango/20180104/1515094046)
- [Meltdown (security vulnerability) - Wikipedia](https://en.wikipedia.org/wiki/Meltdown_\(security_vulnerability\))
- [Spectre (security vulnerability) - Wikipedia](https://en.wikipedia.org/wiki/Spectre_\(security_vulnerability\))

# Summary
- Spectre
  - Variant 1 ([CVE-2017-5753](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2017-5753)), “bounds check bypass.
  - Variant 2 ([CVE-2017-5715](https://www.cve.mitre.org/cgi-bin/cvename.cgi?name=2017-5715)), “branch target injectio.
- Meltdown
  - Variant 3 ([CVE-2017-5754](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2017-5754)), “rogue data cache load.”

# Questions
- What does the term "side channel" mean?
- What is CPU microcode?