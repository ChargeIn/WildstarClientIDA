//----- (0000000140121C50) ----------------------------------------------------
int* __fastcall sub_140121C50(__int64 a1, int** a2)
{
	__int64 v2; // rdi
	int* v5; // r8
	int* v6; // rbx
	int* v7; // r11
	int v8; // esi
	char* v9; // r9
	int v10; // edx
	int v11; // ecx
	int* v12; // r10
	int v13; // eax
	int* v14; // r8
	char* v15; // r9
	int v16; // edx
	int v17; // ecx
	int v18; // eax
	unsigned __int64 v19; // rsi
	int* v20; // rax
	int* v21; // rdi
	int* v23; // [rsp+20h] [rbp-28h] BYREF
	__int64 v24; // [rsp+28h] [rbp-20h]
	int* v25; // [rsp+50h] [rbp+8h] BYREF
	int* v26; // [rsp+60h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v5 = *(int**)(v2 + 8);
	v6 = (int*)v2;
	if (v5)
	{
		v7 = *a2;
		v8 = *(char*)*a2;
		do
		{
			v9 = (char*)*((_QWORD*)v5 + 4);
			LOBYTE(v10) = *v9;
			v11 = *v9 - v8;
			if (v11)
			{
			LABEL_7:
				if (v11 < 0)
				{
					v5 = (int*)*((_QWORD*)v5 + 3);
					continue;
				}
			}
			else
			{
				v12 = v7;
				while ((_BYTE)v10)
				{
					v10 = v9[1];
					v13 = *((char*)v12 + 1);
					++v9;
					v12 = (int*)((char*)v12 + 1);
					v11 = v10 - v13;
					if (v10 != v13)
						goto LABEL_7;
				}
			}
			v6 = v5;
			v5 = (int*)*((_QWORD*)v5 + 2);
		} while (v5);
	}
	if (v6 == (int*)v2)
	{
	LABEL_16:
		if (*a2)
		{
			v19 = *((_QWORD*)*a2 - 1);
			v20 = sub_14018B280(v19 + 17, 0);
			if (v20)
			{
				*((_QWORD*)v20 + 1) = v19;
				*(_QWORD*)v20 = off_140B55060;
			}
			v21 = v20 + 4;
			sub_1407DB590(v20 + 4, *a2, v19);
			*((_BYTE*)v21 + v19) = 0;
			v23 = v21;
		}
		else
		{
			v23 = 0i64;
		}
		v24 = 0i64;
		v25 = v6;
		sub_140121E10(a1, &v26, (__int64*)&v25, &v23);
		v6 = v26;
		if (v24)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
		if (v23)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
		return v6 + 10;
	}
	v14 = *a2;
	v15 = (char*)*((_QWORD*)v6 + 4);
	LOBYTE(v16) = *(_BYTE*)*a2;
	v17 = (char)v16 - *v15;
	if (v17)
	{
	LABEL_15:
		if (v17 >= 0)
			return v6 + 10;
		goto LABEL_16;
	}
	while ((_BYTE)v16)
	{
		v16 = *((char*)v14 + 1);
		v18 = v15[1];
		v14 = (int*)((char*)v14 + 1);
		++v15;
		v17 = v16 - v18;
		if (v16 != v18)
			goto LABEL_15;
	}
	return v6 + 10;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

