import { ApplicationConfig } from '@angular/core';
import { provideRouter } from '@angular/router';

import { AuthService } from './auth.service';

import { routes } from './app.routes';
import { HttpClientModule } from '@angular/common/http';

export const appConfig: ApplicationConfig = {
  providers: [
    provideRouter(routes),
    AuthService,
    HttpClientModule,
  ]
};
