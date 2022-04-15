//----- (00000001400C84B0) ----------------------------------------------------
void __fastcall sub_1400C84B0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	char v6; // r9
	char v8; // al
	bool v9; // cl
	__int64 v10; // rax
	__int64 v11; // rax
	bool v12; // al
	_QWORD* v13; // rax
	_QWORD** v14; // rbx
	unsigned int v15; // [rsp+58h] [rbp+10h]
	__int64 v16; // [rsp+60h] [rbp+18h]

	v16 = a3;
	v15 = a2;
	++dword_140C63644;
	v6 = *((_BYTE*)a1 + 28);
	if ((v6 & 1) != 0)
	{
		v8 = *((_BYTE*)a1 + 29);
		v9 = (v8 & 8) != 0 || (v8 & 0x10) != 0 || (v8 & 0x20) != 0 || (v8 & 0x40) != 0;
		v10 = a1[58];
		v12 = 1;
		if (!v10 || (*(_BYTE*)(v10 + 1392) & 4) == 0)
		{
			v11 = a1[59];
			if (!v11 || (*(_BYTE*)(v11 + 1392) & 4) == 0)
				v12 = 0;
		}
		if ((v6 & 8) != 0)
		{
			if (!v9 && !v12)
			{
				v13 = (_QWORD*)a1[70];
				if (v13 != (_QWORD*)*v13)
				{
					do
					{
						v14 = (_QWORD**)(v13 + 1);
						sub_1400C84B0(*(_QWORD*)(v13[1] + 16i64), a2, a3, a4, a5);
						v13 = *v14;
						a3 = v16;
						a2 = v15;
					} while (*v14 != *(_QWORD**)a1[70]);
				}
			}
			(*(void(__fastcall**)(_QWORD*, __int64, __int64, __int64, __int64))(*a1 + 200i64))(a1, a2, a3, a4, a5);
		}
		else if ((a1[82] & 0x800000000i64) != 0)
		{
			(*(void(__fastcall**)(_QWORD*, __int64, __int64, __int64))(*a1 + 200i64))(a1, a2, a3, a4);
		}
	}
}
// 140C63644: using guessed type int dword_140C63644;

