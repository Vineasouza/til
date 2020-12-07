import { StatusBar } from 'expo-status-bar';
import React from 'react';
import { StyleSheet, Text, View, Image, Button, ScrollView } from 'react-native';

import { createDrawerNavigator } from '@react-navigation/drawer';
import { NavigationContainer } from '@react-navigation/native';
import { TextInput } from 'react-native-gesture-handler';

function HomeScreen({ navigation }) {
  return (
    <View style={{ flex: 1, alignItems: 'center', justifyContent: 'center' }}>
      <View style={styles.container}>
        <Text style={styles.mainText}>Home Component ⚙ </Text>
        <Image
          source={require('./assets/homeImage.png')}
          style={{ width: 300, height: 300 }}
        />
        <View style={styles.buttonContainer}>
          <Button
            onPress={() => navigation.navigate('Notifications')}
            title="Go to notifications"
            color= "#BA68C8"
          />
        </View>
        <View style={styles.buttonContainer}>
          <Button
            onPress={() => navigation.navigate('Input')}
            title="Go to input"
            color= "#BA68C8"
          />
        </View>
        <View style={styles.buttonContainer}>
          <Button
            onPress={() => navigation.navigate('Error')}
            title="404 Error"
            color= "#BA68C8"
          />
        </View>
      </View>
      <StatusBar style="auto" backgroundColor="#BA68C8" showHideTransition="fade"/>
    </View>
  );
}

function NotificationsScreen({ navigation }) {
  return (
    <View style={{ flex: 1, alignItems: 'center', justifyContent: 'center' }}>
      <View style={styles.container}>
        <Text style={styles.mainText}>Notifications Component ⚙ </Text>
        <Image
          source={require('./assets/detailImage.png')}
          style={{ width: 300, height: 300 }}
        />
        <View style={styles.buttonContainer}>
          <Button
            onPress={() => navigation.navigate('Home')}
            title="Go back home"
            color= "#BA68C8"
          />
        </View>
        <View style={styles.buttonContainer}>
          <Button
            onPress={() => navigation.navigate('Error')}
            title="404 Error"
            color= "#BA68C8"
          />
        </View>
        <StatusBar style="auto" />
      </View>
      <StatusBar style="auto" backgroundColor="#BA68C8" showHideTransition="fade"/>
    </View>
  );
}

function ErrorScreen({ navigation }) {
  return (
    <View style={{ flex: 1, alignItems: 'center', justifyContent: 'center' }}>
      <View style={styles.container}>
        <Text style={styles.mainText}>Error Component ⚙ </Text>
        <Image
          source={require('./assets/404Error.png')}
          style={{ width: 300, height: 300 }}
        />
        <View style={styles.buttonContainer}>
          <Button
            onPress={() => navigation.navigate('Home')}
            title="Go back home"
            color= "#BA68C8"
          />
        </View>
      </View>
      <StatusBar style="auto" backgroundColor="#BA68C8" showHideTransition="fade"/>
    </View>
  );
}

function InputScreen({ navigation }) {
  return (
    <View style={{ flex: 1, alignItems: 'center', justifyContent: 'center' }}>
      <View style={styles.container}>
        <Text style={styles.mainText}>Input Component ⚙ </Text>
        <View style={styles.containerInput}>
          <View style={styles.input}>
            <TextInput placeholder='Input Text' />
          </View>
        </View>
        <View style={styles.buttonContainer}>
          <Button
            onPress={() => navigation.navigate('Home')}
            title="Go back home"
            color= "#BA68C8"
          />
        </View>
      </View>
      <StatusBar style="auto" backgroundColor="#BA68C8" showHideTransition="fade"/>
    </View>
  );
}

const Drawer = createDrawerNavigator();

export default function App() {
  return (
    <NavigationContainer>
      <Drawer.Navigator initialRouteName="Home">
        <Drawer.Screen name="Home" component={HomeScreen} />
        <Drawer.Screen name="Notifications" component={NotificationsScreen} />
        <Drawer.Screen name="Error" component={ErrorScreen} />
        <Drawer.Screen name="Input" component={InputScreen} />
      </Drawer.Navigator>
    </NavigationContainer>
  );
}

/* Styles CSS */
const styles = StyleSheet.create({
  container: {
    // backgroundColor: '#ccc',
    width: 250,
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
  buttonContainer: {
    margin: 10,
    width: 150,
    borderRadius: 15,
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
  },
  input: {
    color: '#333',
    fontSize: 18,
    lineHeight: 28,
    borderColor:'#ccc',
    borderWidth: 0.5,
    borderRadius: 4,
    fontFamily: 'sans-serif-light',
    padding: 4,
    width: 150,
  },
  containerInput: {
    padding: 10,
  }
});