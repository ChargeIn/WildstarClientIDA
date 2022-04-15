//----- (00000001404BC3C0) ----------------------------------------------------
void __fastcall sub_1404BC3C0(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 v3; // rcx
	_QWORD* v4; // rsi
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	void(__fastcall * v7)(_QWORD, _QWORD*, _QWORD, _QWORD); // rax
	void(__fastcall * v8)(_QWORD, _QWORD*, __int64); // rax
	int v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v11)(); // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]

	v1 = *(_QWORD**)(a1 + 640);
	if (v1)
	{
		do
		{
			v3 = v1[1];
			v4 = (_QWORD*)v1[3];
			v9 = 0;
			if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, &v9))
			{
				v5 = (_QWORD*)v1[2];
				if (v5)
					*v5 = v1[3];
				v6 = v1[3];
				if (v6)
					*(_QWORD*)(v6 + 16) = v1[2];
				v1[2] = 0i64;
				v1[3] = 0i64;
				v7 = *(void(__fastcall**)(_QWORD, _QWORD*, _QWORD, _QWORD))(a1 + 648);
				if (v7)
					v7(*(unsigned int*)v1, v1, 0i64, 0i64);
				v8 = *(void(__fastcall**)(_QWORD, _QWORD*, __int64))(a1 + 648);
				if (v8)
					v8(*(unsigned int*)v1, v1, 1i64);
			}
			v1 = v4;
		} while (v4);
	}
	if (*(_QWORD*)(a1 + 640))
	{
		v9 = 0;
		v10 = a1;
		v11 = sub_1404BC3C0;
		v12 = 0i64;
		sub_140195960(a1 + 568, 100, (__int64)&v9, 4);
	}
}

