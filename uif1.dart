import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
      appBar: AppBar(
        title: Text("Custon widget with animation"),
      ),
      body: Center(
        child: FadeIconTextButton(
            icon: Icons.thumb_up,
            text: 'Like',
            onPressed: () {
              print("Button Pressed! bro");
            }),
       ),
      ),
    );
  }
}

class FadeIconTextButton extends StatefulWidget {
  final IconData icon;
  final String text;
  final VoidCallback onPressed;
  
  const FadeIconTextButton({ Key? key,
    required this.icon,
    required this.text,
    required this.onPressed,
  }) : super(key: key);

  State<FadeIconTextButton> createState() => FadeIconTextButtonState();
}

class FadeIconTextButtonState extends State<FadeIconTextButton> with SingleTickerProviderStateMixin {
  late AnimationController controller;
  late Animation<double> animation;
  
  void initState() {
    super.initState();
    controller = AnimationController(
      duration: const Duration(milliseconds: 500),
      vsync: this,
    );
    animation = CurvedAnimation(
      parent: controller,
      curve: Curves.easeInOut,
    );
  }

  void handlePress() {
    if (controller.isCompleted) {
      controller.reverse();
    } else {
      controller.forward();
    }
    widget.onPressed();
  }

  void dispose() {
    controller.dispose();
    super.dispose();
  }

  Widget build(BuildContext context) {
    return FadeTransition(
      
      opacity: animation,
      
      child: ElevatedButton.icon(
        onPressed: handlePress,
        icon: Icon(widget.icon),
        label: Text(widget.text),
        style: ElevatedButton.styleFrom(
          backgroundColor: Colors.amber,
          foregroundColor: Colors.black,
        ),
      ),
    );
  }
}
