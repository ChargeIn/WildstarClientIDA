//----- (000000014049F280) ----------------------------------------------------
char __fastcall sub_14049F280(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 v6; // rax
	__int64 v7; // rsi
	int v8; // ecx
	int v9; // edx
	int v10; // ebx

	if (a2)
	{
		v6 = sub_14020E7A0(a4);
		v7 = v6;
		if (v6)
		{
			sub_140245C00(*(_DWORD*)(a2 + 460));
			v8 = *(_DWORD*)(v7 + 16);
			v9 = *(_DWORD*)(a2 + 384);
			LOBYTE(v6) = 0;
			v10 = a3 - 1;
			if (v10)
			{
				if (v10 == 1)
					LOBYTE(v6) = v9 != v8;
			}
			else
			{
				LOBYTE(v6) = v9 == v8;
			}
		}
	}
	else
	{
		LOBYTE(v6) = 0;
	}
	return v6;
}

