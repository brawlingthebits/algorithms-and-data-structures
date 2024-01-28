# Queue

FIFO: First IN, First OUT. It means that the first to enter the queue will be the first to be served. Actually, this person can leave the queue before being served, but it will be the first to be served if it stays in the queue.

### i++ and ++i

```c++
int i = 0;
cout << i++ << endl; // 0
cout << i << endl; // 1
cout << ++i << endl; // 2
cout << i << endl; // 2
```

Okay, let's imagine you have a jar of cookies. Each cookie represents a number, and you want to count how many cookies there are. You have two ways to do it: i++ and ++i.

The i++ way is like this: You count a cookie (say, cookie number 1), then you put a mark on a piece of paper (you remember that you counted 1 cookie), and then you add another cookie to the jar. This is because i++ first uses the current value of i (which is the "cookie" in this analogy), and then increments i by one (adds a cookie to the jar).

The ++i way is a bit different: First, you add another cookie to the jar, and then you count the cookies. So if you started with 1 cookie in the jar, you first add another cookie (now there are 2 cookies), and then you write the number '2' on the paper. This is because ++i first increments i by one (adds a cookie to the jar), and then uses the new value of i (counts the cookies).

Now, about the "less memory use" part. In computer programming, sometimes it's important to use as little memory as possible. This can be like trying to fit as many toys as possible in your toy box. In some cases, ++i might use less memory than i++ because it doesn't need to remember the original number of cookies before adding another one. But in most modern programming languages, the difference in memory usage is very small or even nonexistent. So while it's something good to know, you don't usually have to worry about it when you're just learning to program.