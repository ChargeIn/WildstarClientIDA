//----- (00000001405536C0) ----------------------------------------------------
__int64 __fastcall sub_1405536C0(__int64 a1, unsigned int a2)
{
	unsigned int v2; // eax
	__int64 v4; // rax
	_QWORD* v5; // rax
	unsigned int v6; // r9d
	__int64 v7; // r10
	_QWORD* v8; // rdx
	__int64 v9; // rax
	unsigned int v10; // ecx

	v2 = *(_DWORD*)(a1 + 16);
	if (a2 == v2)
		return 0i64;
	if (a2 > v2)
		return 0i64;
	v4 = *(_QWORD*)(a1 + 8i64 * a2 + 24);
	if (!v4)
		return 0i64;
	if (!*(_DWORD*)(v4 + 40))
		return 0i64;
	v5 = (_QWORD*)sub_1405FC7B0(*(_QWORD*)qword_140C65B80, **(_DWORD**)(a1 + 8));
	v8 = v5;
	if (!v5)
		return 0i64;
	v9 = *v5;
	if (v9)
	{
		v10 = *(_DWORD*)(v9 + 16);
		if ((_DWORD)v7 == v10)
		{
			LODWORD(v9) = 0;
		}
		else if ((unsigned int)v7 <= v10)
		{
			LODWORD(v9) = *((_DWORD*)v8 + v7 + 20);
		}
		else
		{
			LODWORD(v9) = 0;
		}
	}
	if (dword_140C636A8 >= (unsigned int)v9 && dword_140C636A8 - (int)v9 <= v6)
		return v6 - (dword_140C636A8 - (_DWORD)v9);
	else
		return 0i64;
}
// 140553718: variable 'v7' is possibly undefined
// 140553738: variable 'v6' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65B80: using guessed type __int64 qword_140C65B80;

