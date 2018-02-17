# simpleAugmentedLagrangeOptEx
This a simple example for optimization code using Augmented Lagrange Method

objective function :    f (x,y) = (x-2)^2 + (y-2)^2

inequality constraint : g1(x,y) = 7-x-y <= 0
                        g2(x,y) = 1+x-y <= 0
                        
initial condition : lambda1 = lambda2 = 0


Note :
Correct solution => x* = [3.0 4.0]
                    lambda = [3.0 1.0]
                    f* = 5.0
                    g* = [0.0 0.0]
