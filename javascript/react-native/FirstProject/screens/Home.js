import { StatusBar } from 'expo-status-bar';
import React from 'react';
import { StyleSheet, Text, View, Image, Button } from 'react-native';

export default function Home() {

  return (
    <View style={styles.container}>
      <Text style={styles.mainText}>Home Component ⚙ </Text>
      <Image
        source={require('../assets/homeImage.png')}
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
    fontSize: 25,
    fontFamily: 'sans-serif-light',
    fontWeight: 'normal',
    padding: 10,
  }
});