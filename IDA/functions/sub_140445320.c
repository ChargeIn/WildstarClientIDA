//----- (0000000140445320) ----------------------------------------------------
_DWORD* __fastcall sub_140445320(_DWORD* a1, unsigned int a2)
{
	int v3; // ebx
	__int64 v4; // rcx
	__int64 v6; // r8
	__int64 v7; // rax
	int v8; // esi
	__int64 v9; // rdx
	int v10; // ecx
	int v11; // eax
	__int64 v12; // rax
	int v13; // edx
	int v14; // eax

	v3 = 0;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4)
	{
		v6 = *(_QWORD*)(qword_140C65898 + 29272);
		if (v6 && *(_DWORD*)(v6 + 20) || !sub_1403B48B0(v4))
		{
			v8 = 0;
		}
		else
		{
			v7 = sub_140200220(0x937u);
			if (v7)
				v8 = *(_DWORD*)(v7 + 4);
			else
				v8 = 90;
		}
		if ((unsigned int)sub_1403C86D0())
			v8 = sub_1403C86D0();
		v9 = *(_QWORD*)(qword_140C65898 + 29272);
		if (v9)
		{
			v11 = *(_DWORD*)(v9 + 20);
			if (v11 == 3 || (v10 = 0, v11 == 8))
				v10 = 1;
		}
		else
		{
			v10 = 0;
		}
		if (v9)
			v3 = *(_DWORD*)(v9 + 64);
		v12 = *(_QWORD*)(qword_140C65898 + 120);
		v13 = *(_DWORD*)(v12 + 60);
		if (!v13)
			v13 = *(_DWORD*)(v12 + 56);
		v14 = *(_DWORD*)(v12 + 56);
		a1[6] = v8;
		*a1 = v14;
		a1[1] = v13;
		a1[2] = (unsigned __int16)a2;
		a1[5] = v3;
		a1[7] = v10;
		a1[4] = HIBYTE(a2);
		a1[3] = BYTE2(a2);
		return a1;
	}
	else
	{
		*((_QWORD*)a1 + 1) = 0i64;
		*((_QWORD*)a1 + 2) = 0i64;
		*((_QWORD*)a1 + 3) = 0i64;
		*(_QWORD*)a1 = 1i64;
		return a1;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

