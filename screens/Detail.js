import { StatusBar } from 'expo-status-bar';
import React from 'react';
import { StyleSheet, Text, View, Image, Button } from 'react-native';

export default function App() {

  return (
    <View style={styles.container}>
      <Image
        source={require('../assets/detailImage.png')}
        style={{ width: 300, height: 300 }}
      />
      <Text style={styles.mainText}>DETAIL SCREEN</Text>
      <View style={styles.buttonContainer}>
        <Button
          onPress={() => {
            alert('Alert Test 🖐');
          }}
          title="Press Me"
          color= "#BA68C8"
        />
      </View>
      <StatusBar style="auto" />
    </View>
  );
}


const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#f4f4f4',
    alignItems: 'center',
    justifyContent: 'center',
  },
  buttonContainer: {
    margin: 20,
    width: 100
  },
  mainText: {
    margin: 10,
    fontSize: 20,
    fontFamily: 'sans-serif-light',
    fontWeight: 'normal',
  }
});