# Nimbro Speak: Intelligent Conversational Agent

## Overview
Nimbro Speak is an interactive communication system that enables a robot to engage in meaningful dialogue with a human to accomplish a specific communication objective. It leverages GPT-based AI models to generate and validate responses, ensuring coherent and goal-oriented conversations.

## Features
- **Goal-Oriented Communication:** Ensures that conversations persist until the objective is achieved.  
- **Adaptive Dialogue:** The system interprets user responses dynamically, retrying when necessary.  
- **Sanity Check for Responses:** Uses AI validation to determine whether a user's reply is sensible.  
- **Automated Stopping Mechanism:** Ends the conversation once the objective is met or deemed unachievable.  

## How It Works
1. **Initialization:**  
   - The robot starts a new session and sets parameters for communication.  
   - It defines the `"speak"` and `"stop_conversation"` tools.  

2. **Conversation Execution:**  
   - The robot generates speech directed at a specified person based on the given objective.  
   - If a response is needed, the system waits for input and evaluates its relevance.  

3. **Response Validation:**  
   - An AI-powered **sanity check** determines whether the response is sensible.  
   - If the response is valid, the conversation progresses. Otherwise, clarification is requested.  

4. **Conversation Termination:**  
   - The dialogue continues until the objective is fulfilled or further attempts become ineffective.  

## Usage
This project is designed for **robotic assistants** and **interactive AI systems** that require reliable human-robot communication. It can be used in applications such as customer service, assistance robots, and guided interactions.

## Requirements
- Python 3
- Ros 2
- Nimbro API  
- GPT-based AI models (e.g., `gpt-4o-mini`)  


## Team members:
- Sulaeman Aloradi: s87salor@uni-bonn.de
- Abdelwahab Elshennaway: 
- Supervised by Bastian Pätzold: paetzold@ais.uni-bonn.de


