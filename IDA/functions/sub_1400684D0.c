//----- (00000001400684D0) ----------------------------------------------------
void __fastcall sub_1400684D0(__int64 a1)
{
	__int64* v1; // rdi
	int v2; // edx
	__int64 v3; // rbx
	int v4; // eax
	int v5; // eax

	v1 = *(__int64**)(a1 + 48);
	v2 = 0;
	v3 = v1[5];
	if (!v3)
		LABEL_10:
	sub_140062CF0(a1, aNoLoopToBreak, *(_DWORD*)(a1 + 16));
	while (!*(_BYTE*)(v3 + 14))
	{
		v4 = *(unsigned __int8*)(v3 + 13);
		v3 = *(_QWORD*)v3;
		v2 |= v4;
		if (!v3)
			goto LABEL_10;
	}
	if (v2)
		sub_14006BBF0(*(_QWORD*)(a1 + 48), (*(unsigned __int8*)(v3 + 12) << 6) | 0x23, *(_DWORD*)(v1[3] + 8));
	v5 = sub_14006A030(v1);
	if (v5 != -1)
		sub_14006A3C0(v1, (int*)(v3 + 8), v5);
}

