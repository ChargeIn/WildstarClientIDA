//----- (000000014085C050) ----------------------------------------------------
__int64 __fastcall sub_14085C050(_QWORD* a1, __int64* a2)
{
	unsigned int v4; // r8d
	__int64 v5; // rax
	unsigned int v6; // ebp
	unsigned int v7; // esi
	unsigned __int8* v8; // rax
	unsigned int v9; // r15d
	unsigned int v10; // ebx
	_BYTE* v11; // rax
	unsigned __int8 v12; // cl
	int v13; // r8d
	char v14; // dl

	v4 = *(unsigned __int8*)*a2;
	v5 = *a2 + 1;
	v6 = 1;
	*a2 = v5;
	v7 = v4;
	if ((_BYTE)v4)
	{
		v8 = (unsigned __int8*)(v5 + 1);
		v9 = *(v8 - 1);
		v10 = 0;
		*a2 = (__int64)v8;
		do
		{
			v11 = (_BYTE*)(*a2 + 1);
			v12 = *(_BYTE*)*a2;
			*a2 = (__int64)v11;
			v11 += 4;
			v13 = *((_DWORD*)v11 - 1);
			*a2 = (__int64)v11;
			v14 = *v11;
			*a2 = (__int64)(v11 + 2);
			if (v13)
			{
				v6 = sub_140854420(a1, v12, v13, v14 != 0);
				if (v6 != 1)
					break;
			}
			++v10;
		} while (v10 < v7);
		sub_140853680(a1, v9, 0xFFFFFFFF);
	}
	return v6;
}
// 14085C09B: conditional instruction was optimized away because r8d.4 is in (1..FF)

