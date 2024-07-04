import ROOT
def plot():
    global f
    f = ROOT.TF1("f1", "sin(x)/x", 0., 10.)
    f.Draw()
    ROOT.gApplication.Run()

plot()