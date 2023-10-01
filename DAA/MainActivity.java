package com.example.practical_2;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity
{
    int num;
    TextView tv;
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tv = (TextView) findViewById(R.id.textView2);
       // num = Integer.parseInt(tv.getText().toString());
    }

    public void inc(View v)
    {
        num++;
        tv.setText(""+num);
    }

    public void dec(View v)
    {
        num--;
        tv.setText(""+num);
    }

    public void reset(View v)
    {
        num = 0;
        tv.setText(""+num);
    }
}