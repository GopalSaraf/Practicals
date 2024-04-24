import { Component } from '@angular/core';
import { FormBuilder } from '@angular/forms';
import { ReactiveFormsModule } from '@angular/forms';
import { Router, RouterLink } from '@angular/router';
import { AuthService } from '../auth.service';
import { Login } from '../auth';
import { HttpClientModule } from '@angular/common/http';


@Component({
  selector: 'app-login',
  standalone: true,
  imports: [
    ReactiveFormsModule,
    RouterLink,
    HttpClientModule
  ],
  templateUrl: './login.component.html',
  styleUrl: './login.component.css',
  providers: [AuthService, RouterLink],
})
export class LoginComponent {
  loginForm = this.formBuilder.group({
    email: '',
    password: ''
  });

  constructor(private formBuilder: FormBuilder, private authService: AuthService, private router: Router) { }

  onSubmit() {
    const login = { ...this.loginForm.value };
    console.log('Login:', login);
    this.authService.login(login as Login).subscribe((response) => {
      console.log('User logged in:', login);
      console.log('Response:', response);

      const user = { ...response } as any;

      sessionStorage.setItem('id', user.id as string);
      sessionStorage.setItem('name', user.name as string);
      sessionStorage.setItem('email', user.email as string);
    });
    this.router.navigate(['/home']);
  }
}
