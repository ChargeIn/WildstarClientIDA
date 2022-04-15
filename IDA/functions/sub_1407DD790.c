//----- (00000001407DD790) ----------------------------------------------------
PVOID __fastcall sub_1407DD790(PVOID Ptr)
{
	PVOID* v2; // r14
	PVOID* v3; // rax
	PVOID* v4; // rbx
	__int64 v5; // rdi
	unsigned __int64 v6; // r15
	SIZE_T v7; // rax
	unsigned __int64 v8; // rsi
	__int64 v9; // rdx
	SIZE_T v10; // rdx
	char* v11; // rax
	PVOID v12; // rbx

	sub_1407DBD90();
	v2 = (PVOID*)DecodePointer(qword_140DC6358);
	v3 = (PVOID*)DecodePointer(qword_140DC6350);
	v4 = v3;
	if (v3 < v2
		|| (v5 = (char*)v3 - (char*)v2,
			v6 = (char*)v3 - (char*)v2 + 8,
			(unsigned __int64)((char*)v3 - (char*)v2) >= 0xFFFFFFFFFFFFFFF8ui64))
	{
		v12 = 0i64;
		goto LABEL_15;
	}
	v7 = sub_1407E88B0(v2);
	v8 = v7;
	if (v7 >= v6)
		goto LABEL_13;
	v9 = 4096i64;
	if (v7 < 0x1000)
		v9 = v7;
	v10 = v7 + v9;
	if (v10 < v7)
	{
		v12 = 0i64;
	}
	else
	{
		v11 = (char*)sub_1407E2CAC(v2, v10);
		v12 = 0i64;
		if (v11)
		{
		LABEL_12:
			v4 = (PVOID*)&v11[8 * (v5 >> 3)];
			qword_140DC6358 = EncodePointer(v11);
		LABEL_13:
			*v4 = EncodePointer(Ptr);
			qword_140DC6350 = EncodePointer(v4 + 1);
			v12 = Ptr;
			goto LABEL_15;
		}
	}
	if (v8 + 32 >= v8)
	{
		v11 = (char*)sub_1407E2CAC(v2, v8 + 32);
		if (v11)
			goto LABEL_12;
	}
LABEL_15:
	sub_1407DBD9C();
	return v12;
}

