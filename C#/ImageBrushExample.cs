using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;
using System.Windows.Media.Imaging;

    public class ImageBrushExample : Page
    {
    
        public ImageBrushExample()
        {
        
            StackPanel mainPanel = new StackPanel();
            canvasBackgroundExample(mainPanel);
            this.Content = mainPanel;
        
        }
                 

        private void canvasBackgroundExample(Panel mainPanel)
        {
            
            BitmapImage theImage = new BitmapImage
                (new Uri("sampleImages\\Waterlilies.jpg", UriKind.Relative));
            
            ImageBrush myImageBrush = new ImageBrush(theImage);
            
            Canvas myCanvas = new Canvas();
            myCanvas.Width = 300;
            myCanvas.Height = 200;
            myCanvas.Background = myImageBrush;
            
            mainPanel.Children.Add(myCanvas);
    
    
        }
    
    }

