//----- (00000001403BB200) ----------------------------------------------------
void __fastcall sub_1403BB200(__int64 a1, unsigned int a2, unsigned __int8 a3, unsigned __int8 a4)
{
	__int64 v4; // r11
	__int64 v5; // r10
	__int64 v6; // rax
	_QWORD* v7; // rax
	__int64 v8; // rcx
	unsigned __int8 v9; // r8
	__int64 v10; // rbx
	__int64 v11; // rcx
	unsigned __int8 v12; // al
	__int64 v13; // [rsp+20h] [rbp-18h]

	if (a2)
	{
		v4 = *(_QWORD*)(a1 + 2728);
		v5 = v4;
		v6 = *(_QWORD*)(v4 + 8);
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < a2)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v5 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v5 == v4 || (v13 = v5, a2 < *(_DWORD*)(v5 + 32)))
			v13 = *(_QWORD*)(a1 + 2728);
		if (v13 != v4)
		{
			v7 = *(_QWORD**)(v13 + 40);
			v8 = a3;
			if ((unsigned __int64)a3 < v7[1])
			{
				v9 = a4;
				v10 = *(_QWORD*)(*v7 + 8 * v8);
				v11 = *(unsigned __int8*)(v10 + 9);
				if (a4 > (unsigned __int8)v11)
					v9 = *(_BYTE*)(v10 + 9);
				*(_BYTE*)(v10 + 8) = v9;
				v12 = v9;
				if (!v9)
					v12 = 1;
				*(_DWORD*)(v10 + 4) = sub_1407A1440(v11, a2, v12);
			}
		}
	}
}

