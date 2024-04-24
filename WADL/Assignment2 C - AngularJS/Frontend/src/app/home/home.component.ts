import { CommonModule } from '@angular/common';
import { Component } from '@angular/core';
import { Router, RouterLink } from '@angular/router';

@Component({
  selector: 'app-home',
  standalone: true,
  imports: [
    CommonModule
  ],
  templateUrl: './home.component.html',
  styleUrl: './home.component.css',
  providers: [
    RouterLink
  ],
})
export class HomeComponent {

  constructor(private router: Router) { }

  logout() {
    sessionStorage.clear();
    this.router.navigate(['/login']);
  }

  login() {
    this.router.navigate(['/login']);
  }

  get name() {
    return sessionStorage.getItem('name');
  }

  get email() {
    return sessionStorage.getItem('email');
  }

  get id() {
    return sessionStorage.getItem('id');
  }

  get isLoggedIn() {
    return !!sessionStorage.getItem('id');
  }


}
