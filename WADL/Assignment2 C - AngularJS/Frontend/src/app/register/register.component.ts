import { Component } from '@angular/core';
import { FormBuilder } from '@angular/forms';
import { ReactiveFormsModule } from '@angular/forms';
import { Router, RouterLink } from '@angular/router';
import { AuthService } from '../auth.service';
import { User } from '../auth';
import { HttpClientModule } from '@angular/common/http';

@Component({
  selector: 'app-register',
  standalone: true,
  imports: [
    ReactiveFormsModule,
    RouterLink,
    HttpClientModule
  ],
  templateUrl: './register.component.html',
  styleUrl: './register.component.css',
  providers: [AuthService, RouterLink],
})
export class RegisterComponent {
  registerForm = this.formBuilder.group({
    name: '',
    email: '',
    password: ''
  });

  constructor(private formBuilder: FormBuilder, private authService: AuthService, private router: Router) { }

  onSubmit() {    
    const user = { ...this.registerForm.value };
    this.authService.register(user as User).subscribe((response) => {
      console.log('User registered:', user);
      console.log('Response:', response);
    });
    this.router.navigate(['/login']);
  }
}
