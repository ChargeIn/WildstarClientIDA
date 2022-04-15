//----- (0000000140554B30) ----------------------------------------------------
void __fastcall sub_140554B30(__int64 a1, int a2)
{
	_QWORD* v3; // r8
	_QWORD* v4; // rax
	int v5; // r10d
	__int64 v6; // rcx
	unsigned int v7; // edx
	_QWORD** v8; // rdx
	unsigned int v9; // r8d
	_QWORD* v10; // rax

	v3 = *(_QWORD**)(qword_140C7DCD0 + 72);
	v4 = (_QWORD*)*v3;
	if ((_QWORD*)*v3 != v3)
	{
		v5 = 11712;
		while (1)
		{
			v6 = v4[2];
			v7 = *(_DWORD*)(v6 + 56);
			if (v7 <= 0xD && _bittest(&v5, v7) && *(_DWORD*)(v6 + 60) == a2)
				break;
			v4 = (_QWORD*)*v4;
			if (v4 == v3)
				return;
		}
		sub_140555040((__int64)&qword_140C7DC60);
		v8 = *(_QWORD***)(qword_140C7DCD0 + 24);
		v9 = 0;
		v10 = *v8;
		if (*v8 == v8)
			goto LABEL_12;
		do
		{
			v10 = (_QWORD*)*v10;
			++v9;
		} while (v10 != v8);
		if (v9 < 2)
		{
		LABEL_12:
			if ((_DWORD)qword_140C7DC60)
			{
				sub_1405548F0((__int64)&qword_140C7DC60);
			}
			else
			{
				*(__int64*)((char*)&qword_140C7DC60 + 4) = 0i64;
				qword_140C7DC6C = -4294966996i64;
				if (*(_DWORD*)(qword_140C65898 + 26180) == 37)
					sub_1403A71F0(qword_140C65898, 0, 0x65u, 1);
			}
		}
		else
		{
			sub_140558930((__int64)&qword_140C7DC60, 1, 0, 1);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC6C: using guessed type __int64 qword_140C7DC6C;
// 140C7DCD0: using guessed type __int64 qword_140C7DCD0;

