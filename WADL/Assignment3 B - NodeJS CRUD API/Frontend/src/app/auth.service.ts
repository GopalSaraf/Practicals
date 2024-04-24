import { HttpClient } from '@angular/common/http';
import { Injectable } from '@angular/core';
import { User, Login } from './auth';

@Injectable({
  providedIn: 'root'
})
export class AuthService {

  constructor(private http: HttpClient) { }

  register(user: User) {
    return this.http.post('http://localhost:3000/register', user);
  }

  login(login: Login) {
    return this.http.post('http://localhost:3000/login', login);
  }
} 
