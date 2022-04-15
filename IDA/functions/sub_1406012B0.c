//----- (00000001406012B0) ----------------------------------------------------
void __fastcall sub_1406012B0(__int64 a1, __int64 a2)
{
	_QWORD** v2; // rbx
	_QWORD* v4; // rcx
	_QWORD* v6; // rsi
	_QWORD* v7; // rax
	_QWORD* v8; // rcx

	if (a2)
	{
		v2 = *(_QWORD***)(a1 + 8);
		v4 = *v2;
		if (*v2 != v2)
		{
			do
			{
				v6 = (_QWORD*)*v4;
				if (v4[2] == a2)
				{
					v7 = (_QWORD*)v4[1];
					*v7 = v6;
					v6[1] = v7;
					sub_14018B900((__int64)v4, 0);
				}
				v4 = v6;
			} while (v6 != v2);
		}
		if (*(_QWORD*)a2)
			**(_QWORD**)a2 = *(_QWORD*)(a2 + 8);
		v8 = *(_QWORD**)(a2 + 8);
		if (v8)
			*v8 = *(_QWORD*)a2;
		*(_QWORD*)a2 = 0i64;
		*(_QWORD*)(a2 + 8) = 0i64;
		if (*(_DWORD*)(a2 + 984))
			sub_1400B6120(a1 + 16, a2 + 984);
		sub_140625930(a2);
		sub_140619BB0(a2);
		sub_14018B900(a2, 0);
	}
}

