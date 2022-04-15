//----- (0000000140108D20) ----------------------------------------------------
__int64 __fastcall sub_140108D20(__int64 a1, _WORD* a2)
{
	__int64* v4; // rbx
	__int64* v5; // rsi
	__int16 v6; // bp
	__int64 v7; // rdi
	unsigned __int64 v8; // rax
	__int64 v9; // r10
	unsigned __int64 v10; // rdx
	_WORD* v11; // rcx
	__int64 v12; // r10

	if (!a2)
		return 0i64;
	v4 = *(__int64**)(a1 + 96);
	v5 = *(__int64**)(a1 + 104);
	if (v4 != v5)
	{
		v6 = *a2;
		do
		{
			v7 = *v4;
			v8 = 0i64;
			if (v6)
			{
				do
					++v8;
				while (a2[v8]);
			}
			v9 = *(_QWORD*)(v7 + 32);
			if ((*(_QWORD*)(v7 + 40) - v9) >> 1 == v8)
			{
				v10 = 0i64;
				if (!v8)
					return *v4;
				v11 = a2;
				v12 = v9 - (_QWORD)a2;
				while (*(_WORD*)((char*)v11 + v12) == *v11)
				{
					++v10;
					++v11;
					if (v10 >= v8)
						return *v4;
				}
			}
			++v4;
		} while (v4 != v5);
	}
	return 0i64;
}
// 140108DCF: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)

