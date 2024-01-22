#pragma once

//SINGLE Macros
#define SINGLE(type)					\
			public:						\
				static type* GetInst()	\
				{						\
					static type mgr;	\
					return &mgr;		\
				}						\
			private:					\
				type();					\
				~type();				