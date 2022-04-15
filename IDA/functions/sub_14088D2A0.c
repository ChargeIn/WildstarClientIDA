//----- (000000014088D2A0) ----------------------------------------------------
void __fastcall sub_14088D2A0(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
	__int16 v6; // r14
	int* v9; // rax
	unsigned int v10; // edi
	int* v11; // rbx
	unsigned int v12; // esi
	unsigned int i; // ebp
	unsigned int j; // ebp
	int v15; // eax
	unsigned int v16; // [rsp+30h] [rbp-38h] BYREF
	unsigned int v17[3]; // [rsp+34h] [rbp-34h] BYREF
	unsigned int v18; // [rsp+88h] [rbp+20h] BYREF

	if (a4)
	{
		v6 = a4;
		v9 = (int*)sub_140890D60(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 128i64));
		v10 = a5;
		v11 = v9;
		if ((v6 & 0x2000) != 0)
			sub_1408921C0(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 128i64), a5, v9, a2, a3);
		if ((v6 & 0x400) != 0 && a2 <= 0 && (int)(a2 + a3) > 0)
			sub_14083BCF0(qword_140C61B80, v10, 0x400u, v11);
		sub_140891ED0(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 128i64), a2, a3, &v18, &v16, v17);
		v12 = 0;
		if ((v6 & 0x200) != 0)
		{
			for (i = 0; i < v18; ++i)
				sub_14083BCF0(qword_140C61B80, v10, 0x200u, v11);
		}
		if ((v6 & 0x100) != 0)
		{
			for (j = 0; j < v16; ++j)
				sub_14083BCF0(qword_140C61B80, v10, 0x100u, v11);
		}
		if ((v6 & 0x1000) != 0 && v17[0])
		{
			do
			{
				sub_14083BCF0(qword_140C61B80, v10, 0x1000u, v11);
				++v12;
			} while (v12 < v17[0]);
		}
		if ((v6 & 0x800) != 0)
		{
			v15 = sub_140891630(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 128i64));
			if (v15 >= a2 && v15 < (int)(a2 + a3))
				sub_14083BCF0(qword_140C61B80, v10, 0x800u, v11);
		}
	}
}
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 14088D2A0: using guessed type unsigned int var_34[3];

