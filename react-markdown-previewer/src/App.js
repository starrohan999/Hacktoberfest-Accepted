import React, { Component } from 'react';
import './App.css';
import marked from 'marked'

class App extends Component {
  state = {
    text : ``,
  }
  render() {
    return (
      <div className="App">
        <textarea name="text" id="editor" cols="30" rows="10" onChange={this.handleChange}></textarea>
        <div id="preview" dangerouslySetInnerHTML={{__html: marked(this.state.text)}}/>
      </div>
    );
  }
  
  handleChange = (e) => this.setState({text : e.target.value})
}

export default App;
