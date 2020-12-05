import { StatusBar } from 'expo-status-bar';
import React from 'react';
import { StyleSheet, Text, View, Image, Button, ScrollView } from 'react-native';
import Home from './screens/Home';

export default function App() {

  return (
    <ScrollView contentContainerStyle={styles.contentContainer}>
      <View style={styles.container}>
      <Text style={styles.mainText}>Hello Guys!! First App! 🤓 </Text>
        <Image
          source={require('./assets/initialImage.png')}
          style={{ width: 300, height: 300 }}
        />
        <View style={styles.buttonContainer}>
          <Button
            onPress={() => {
              alert('Alert Test 🖐');
            }}
            title="Press Me"
            color= "#BA68C8"
          />
        </View>
        <Home/>
        <StatusBar style="auto" backgroundColor="#BA68C8" showHideTransition="fade"/>
      </View>
    </ScrollView>
  );
}


const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
  buttonContainer: {
    margin: 20,
    width: 100,
    borderRadius: 15,
    // elevation: 0,
  },
  mainText: {
    margin: 10,
    fontSize: 25,
    fontFamily: 'sans-serif-light',
    fontWeight: 'normal',
    padding: 10,
  },
  contentContainer: {
    paddingVertical: 50,
    backgroundColor: '#f4f4f4',
  }
});