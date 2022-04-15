//----- (00000001406F7080) ----------------------------------------------------
__int64 __fastcall sub_1406F7080(__int64 a1)
{
	__int64* v1; // rdx
	int v2; // eax
	int v3; // eax
	__int64 v5; // [rsp+20h] [rbp-18h] BYREF
	int v6; // [rsp+28h] [rbp-10h]
	__int64 v7; // [rsp+48h] [rbp+10h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(__int64**)(a1 + 24);
	v2 = *((_DWORD*)v1 + 2);
	if (v2 != 3)
	{
		if (v2 != 4 || !sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v7))
		{
			v3 = 0;
			goto LABEL_9;
		}
		v6 = 3;
		v1 = &v5;
		v5 = v7;
	}
	v3 = (int)*(double*)v1;
	if (v3 > 0)
		--v3;
LABEL_9:
	sub_1405E7490(*(_QWORD*)(qword_140C65898 + 28048), v3, 1);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

