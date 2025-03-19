skinparam default {
    FontName Audi Type Screen Light
    FontStyle bold
    'FontSize 19
}

<style>
wbsDiagram {
  // all lines (meaning connector and borders, there are no other lines in WBS) are black by default
  Linecolor black
  node {
    BackgroundColor #e2e2e2

    :depth(0) {
        BackgroundColor  #f50537
        FontColor white
        FontSize 20
        FontStyle bold
    }
    :depth(1) {
        BackgroundColor #666666
        FontColor white
        FontSize 18
        FontStyle bold
    }
    :depth(2) {
        BackgroundColor #e2e2e2
        FontStyle bold
    }
  }
}
</style>
