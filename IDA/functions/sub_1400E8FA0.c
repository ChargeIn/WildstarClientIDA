//----- (00000001400E8FA0) ----------------------------------------------------
__int64 __fastcall sub_1400E8FA0(__int64 a1, _WORD* a2)
{
	unsigned __int64 v2; // rsi
	unsigned __int64 v3; // rbx
	__int64* v5; // r14
	__int16 v6; // bp
	__int64* v7; // rdi
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // r10
	unsigned __int64 v11; // rdx
	_WORD* v12; // rcx
	__int64 v13; // r10

	v2 = *(_QWORD*)(a1 + 3208);
	v3 = 0i64;
	if (v2)
	{
		v5 = *(__int64**)(a1 + 3200);
		v6 = *a2;
		v7 = v5;
		do
		{
			v8 = *v7;
			v9 = 0i64;
			if (v6)
			{
				do
					++v9;
				while (a2[v9]);
			}
			v10 = *(_QWORD*)(v8 + 24);
			if ((*(_QWORD*)(v8 + 32) - v10) >> 1 == v9)
			{
				v11 = 0i64;
				if (!v9)
					return v5[v3];
				v12 = a2;
				v13 = v10 - (_QWORD)a2;
				while (*(_WORD*)((char*)v12 + v13) == *v12)
				{
					++v11;
					++v12;
					if (v11 >= v9)
						return v5[v3];
				}
			}
			++v3;
			++v7;
		} while (v3 < v2);
	}
	return 0i64;
}
// 1400E9050: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)

