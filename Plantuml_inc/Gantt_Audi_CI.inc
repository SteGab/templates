' https://www.audi.com/ci/en/intro/basics/colours.html
!define Audi_Red  #f50537
!define Audi_Font Audi Type Screen Light

<style>
ganttDiagram {
    TimeLine {
        FontName Audi_Font
        FontSize 19
        BackGroundColor #d9d9d9 
    }
    task {
        FontName Audi_Font
        FontColor black
        FontSize 20
        FontStyle bold
        BackGroundColor Audi_Red
        LineColor black
    }
    milestone {
        FontName Audi_Font
        FontColor black
        FontSize 18
        FontStyle bold
        BackGroundColor yellow
        LineColor red
    }
    separator {
        FontName Audi_Font
		LineColor black
		//BackGroundColor green
		FontSize 16
		FontStyle bold
		FontColor black
	}
    arrow {
		FontName Audi_Font
		FontColor red
		FontSize 18
		FontStyle bold
		LineColor black
	}
    title {
        //HorizontalAlignment right
        FontSize 30
        FontColor blue
    }
}
</style>

skinparam title {
  FontName Audi_Font
  FontSize 29
  BorderRoundCorner 0
  BorderThickness 0
}
skinparam backgroundColor #f2f2f2