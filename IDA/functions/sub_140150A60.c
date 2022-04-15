//----- (0000000140150A60) ----------------------------------------------------
void __fastcall sub_140150A60(__int64 a1, int a2)
{
	_QWORD* v2; // rax
	unsigned int v3; // ebp
	_QWORD* v4; // rbx
	__int64 v7; // rsi
	bool v8; // zf
	__int64 v9; // rcx
	__int64 v10; // rdi
	int* v11; // rcx
	__int64 v12; // [rsp+28h] [rbp-30h]

	v2 = *(_QWORD**)(a1 + 8);
	*(_DWORD*)(a1 + 48) = a2;
	v3 = 0;
	v4 = (_QWORD*)*v2;
	if ((_QWORD*)*v2 != v2)
	{
		do
		{
			v7 = v4[2];
			v8 = a2 == v3;
			if (a2 != v3)
			{
				if (sub_1401301F0(v4[2]))
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v7 + 568i64))(v7, 37i64, v3);
				v8 = a2 == v3;
			}
			*(_BYTE*)(v7 + 1436) &= ~0x40u;
			*(_BYTE*)(v7 + 1436) |= v8 << 6;
			v9 = *(_QWORD*)(v7 + 1560);
			if (v9 && (*(_BYTE*)(v9 + 28) & 1) != 0)
				sub_1400D42F0(v9, v8, 0, 4.0);
			if (a2 == v3 && *(_QWORD*)(v7 + 16))
			{
				LOBYTE(v12) = 0;
				v10 = *(_QWORD*)(*(_QWORD*)(v7 + 32) + 120i64);
				v11 = sub_14018B280(32i64, 0);
				if (v11 != (int*)-16i64)
				{
					*((_QWORD*)v11 + 2) = v7;
					*((_QWORD*)v11 + 3) = v12;
				}
				*(_QWORD*)v11 = v10;
				*((_QWORD*)v11 + 1) = *(_QWORD*)(v10 + 8);
				**(_QWORD**)(v10 + 8) = v11;
				*(_QWORD*)(v10 + 8) = v11;
				(**(void(__fastcall***)(__int64))v7)(v7);
			}
			v4 = (_QWORD*)*v4;
			++v3;
		} while (v4 != *(_QWORD**)(a1 + 8));
	}
}
// 140150B37: variable 'v12' is possibly undefined

