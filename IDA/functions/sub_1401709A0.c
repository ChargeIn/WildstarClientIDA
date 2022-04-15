//----- (00000001401709A0) ----------------------------------------------------
void __fastcall sub_1401709A0(__int64 a1, int a2, int a3)
{
	int v3; // eax
	__int64 v4; // rsi
	unsigned int v7; // ebp
	__int64 v8; // rdx
	int v9; // ecx
	_DWORD* v10; // rdx
	int v11; // eax
	char v12[8]; // [rsp+20h] [rbp-68h] BYREF
	__int64 v13; // [rsp+28h] [rbp-60h]
	__int64 v14; // [rsp+48h] [rbp-40h]
	int v15; // [rsp+60h] [rbp-28h]
	int v16; // [rsp+64h] [rbp-24h]
	int v17; // [rsp+68h] [rbp-20h]
	int v18; // [rsp+6Ch] [rbp-1Ch]
	char v19; // [rsp+70h] [rbp-18h]
	unsigned int v20; // [rsp+74h] [rbp-14h] BYREF

	if (a2 >= 0)
	{
		v3 = *(_DWORD*)(a1 + 1400);
		v4 = a2;
		if (a2 <= v3)
		{
			if (a2 == v3)
			{
				sub_14016C730((__int64)v12);
				v19 = 0;
				if (&v20 == (unsigned int*)(a1 + 708))
				{
					v7 = v20;
				}
				else
				{
					sub_1401429A0(qword_140C63678, v20);
					v20 = *(_DWORD*)(a1 + 708);
					v7 = v20;
					if ((unsigned __int64)v20 < *(_QWORD*)(qword_140C63678 + 48))
					{
						v8 = 32i64 * v20 + *(_QWORD*)(qword_140C63678 + 40);
						v9 = *(_DWORD*)(v8 + 16);
						if ((unsigned int)(v9 - 1) <= 0xFFFFFFFD)
							*(_DWORD*)(v8 + 16) = v9 + 1;
					}
				}
				v17 = 1024;
				v16 = 10;
				v15 = a3;
				v18 = 4;
				sub_140170BA0((_QWORD*)a1, (__int64)v12);
				sub_1401429A0(qword_140C63678, v7);
				if (v14)
					sub_14018B900(v14, 0);
				if (v13)
					sub_14018B900(v13, 0);
			}
			v10 = *(_DWORD**)(*(_QWORD*)(a1 + 1392) + 8 * v4);
			v11 = v10[2];
			if (a3 >= v11)
			{
				if (a3 > v10[3])
					a3 = v10[3];
				v11 = a3;
			}
			v10[1] = v11;
			sub_14016E890(a1);
		}
	}
}
// 140C63678: using guessed type __int64 qword_140C63678;
// 1401709A0: using guessed type char var_68[8];

